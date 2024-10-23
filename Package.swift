// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "SensorsFocus",
    platforms: [
        .iOS(.v8)
    ],
    products: [
        .library(name: "SensorsFocus", targets: ["SensorsFocusDynamic"]),
        .library(name: "SensorsFocusDynamicIDMDiagnosis", targets: ["SensorsFocusDynamicIDMDiagnosis"]),
        .library(name: "SensorsFocusDynamicIDM", targets: ["SensorsFocusDynamicIDM"]),
        .library(name: "SensorsFocusDynamic", targets: ["SensorsFocusDynamic"]),
        .library(name: "SensorsFocusDynamicDiagnosis", targets: ["SensorsFocusDynamicDiagnosis"]),
        .library(name: "SensorsFocusStaticIDMDiagnosis", targets: ["SensorsFocusStaticIDMDiagnosis"]),
        .library(name: "SensorsFocusStaticIDM", targets: ["SensorsFocusStaticIDM"]),
        .library(name: "SensorsFocusStatic", targets: ["SensorsFocusStatic"]),
        .library(name: "SensorsFocusStaticDiagnosis", targets: ["SensorsFocusStaticDiagnosis"]),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(name: "SensorsFocusDynamicIDMDiagnosis", path: "Dynamic+IDM+Diagnosis/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusDynamicIDM", path: "Dynamic+IDM/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusDynamic", path: "Dynamic/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusDynamicDiagnosis", path: "DynamicDiagnosis/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStaticIDMDiagnosis", path: "Static+IDM+Diagnosis/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStaticIDM", path: "Static+IDM/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStatic", path: "Static/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStaticDiagnosis", path: "StaticDiagnosis/SensorsFocus.xcframework"),
    ]
)
