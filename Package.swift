// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "sf-sdk-ios",
    platforms: [
        .iOS(.v8)
    ],
    products: [
        .library(
            name: "SensorsFocus",
            targets: ["SensorsFocus"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "SensorsFocusObjC",
            path: "SensorsFocus/SensorsFocus.xcframework"),
        /// binary target cannot have resources, therefore a wrapper target is needed
        .target(
            name: "SensorsFocus",
            dependencies: [
                .target(name: "SensorsFocusObjC", condition: .when(platforms: [.iOS])),
            ],
            path: "SensorsFocus",
            resources: [
                .copy("SensorsFocus.bundle")
            ]
        )
    ]
)
