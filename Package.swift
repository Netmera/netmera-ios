// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "netmera-ios",
  platforms: [.iOS(.v10)],
  products: [
    // Products define the executables and libraries a package produces, and make them visible to other packages.
    .library(
      name: "NetmeraIOS",
      targets: ["NetmeraWrapper"]
    ),
    .library(
      name: "NetmeraNotificationServiceExtension",
      targets: ["NetmeraNotificationServiceExtensionWrapper"]),
    .library(
      name: "NetmeraNotificationContentExtension",
      targets: ["NetmeraNotificationContentExtensionWrapper"]),
  ],
  dependencies: [
    // Dependencies declare other packages that this package depends on.
    .package(
      url: "https://github.com/AFNetworking/AFNetworking.git",
      .upToNextMajor(from: "4.0.1")
    ),
    .package(
      name: "FMDB",
      url: "https://github.com/ccgus/fmdb",
      .upToNextMajor(from: "2.7.7")
    ),
    .package(
      url: "https://github.com/kishikawakatsumi/UICKeyChainStore.git",
      .upToNextMajor(from: "2.2.1")
    ),
    .package(
      url: "https://github.com/NetmeraSDK/MMWormhole.git",
      .branchItem("feature/spm-support")
    )
  ],
  targets: [
    // Targets are the basic building blocks of a package. A target can define a module or a test suite.
    // Targets can depend on other targets in this package, and on products in packages this package depends on.
    .binaryTarget(
      name: "NetmeraCore",
      path: "Frameworks/NetmeraCore.xcframework"
    ),
    .binaryTarget(
      name: "NetmeraAdId",
      path: "Frameworks/NetmeraAdId.xcframework"
    ),
    .binaryTarget(
      name: "Netmera",
      path: "Frameworks/Netmera.xcframework"
    ),
    .binaryTarget(
      name: "NetmeraNotificationServiceExtension",
      path: "Frameworks/NetmeraNotificationServiceExtension.xcframework"
    ),
    .binaryTarget(
      name: "NetmeraNotificationContentExtension",
      path: "Frameworks/NetmeraNotificationContentExtension.xcframework"
    ),
    .target(
      name: "NetmeraWrapper",
      dependencies: [
        .target(name: "NetmeraCore", condition: .when(platforms: [.iOS])),
        .target(name: "NetmeraAdId", condition: .when(platforms: [.iOS])),
        .target(name: "Netmera", condition: .when(platforms: [.iOS])),
        .product(name: "AFNetworking", package: "AFNetworking"),
        .product(name: "FMDB", package: "FMDB"),
        .product(name: "MMWormhole", package: "MMWormhole"),
        "UICKeyChainStore"
      ],
      linkerSettings: [
        .linkedLibrary("sqlite3"),
        .linkedFramework("CoreLocation"),
        .linkedFramework("WebKit"),
        .linkedFramework("CoreTelephony"),
        .linkedFramework("UserNotifications"),
      ]
    ),
    .target(name: "NetmeraNotificationContentExtensionWrapper",
            dependencies: [
              .target(name: "NetmeraCore", condition: .when(platforms: [.iOS])),
              .target(name: "NetmeraNotificationContentExtension", condition: .when(platforms: [.iOS])),
              .product(name: "MMWormhole", package: "MMWormhole"),
            ]),
    .target(name: "NetmeraNotificationServiceExtensionWrapper",
            dependencies: [
              .target(name: "NetmeraCore", condition: .when(platforms: [.iOS])),
              .target(name: "NetmeraNotificationServiceExtension", condition: .when(platforms: [.iOS])),
            ])
  ]
)
