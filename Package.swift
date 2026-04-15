// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "SensorsFocus",
    platforms: [
        .iOS(.v9)
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
            path: "SensorsFocus/Dynamic+IDM/SensorsFocus.xcframework"
        )
    ]
)
