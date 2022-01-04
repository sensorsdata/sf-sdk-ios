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
            name: "SensorsFocus",
            path: "Sources/SensorsFocus/SensorsFocus.xcframework"),
    ]
)
