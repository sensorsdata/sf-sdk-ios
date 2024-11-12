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
        .binaryTarget(name: "SensorsFocusDynamicIDMDiagnosis", path: "SensorsFocus/Dynamic+IDM+Diagnosis/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusDynamicIDM", path: "SensorsFocus/Dynamic+IDM/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusDynamic", path: "SensorsFocus/Dynamic/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusDynamicDiagnosis", path: "SensorsFocus/DynamicDiagnosis/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStaticIDMDiagnosis", path: "SensorsFocus/Static+IDM+Diagnosis/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStaticIDM", path: "SensorsFocus/Static+IDM/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStatic", path: "SensorsFocus/Static/SensorsFocus.xcframework"),
        .binaryTarget(name: "SensorsFocusStaticDiagnosis", path: "SensorsFocus/StaticDiagnosis/SensorsFocus.xcframework"),
    ])
