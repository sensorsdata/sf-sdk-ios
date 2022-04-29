// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "SensorsFocus",
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
            name: "SensorsFocus",
            path: "SensorsFocus/SensorsFocus.xcframework"
        )
    ]
)
