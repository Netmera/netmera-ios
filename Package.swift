// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "netmera-ios",
  platforms: [.iOS(.v10)],
  products: [
    // Products define the executables and libraries a package produces, and make them visible to other packages.
    .library(
      name: "Netmera",
      targets: ["Netmera"]),
    .library(
      name: "NetmeraWithoutAdId",
      targets: ["NetmeraWithoutAdId"]),
    .library(
      name: "NetmeraNotificationServiceExtension",
      targets: ["NetmeraNotificationServiceExtension"]),
    .library(
      name: "NetmeraNotificationContentExtension",
      targets: ["NetmeraNotificationContentExtension"]),
  ],
  dependencies: [
    // Dependencies declare other packages that this package depends on.
    // .package(url: /* package url */, from: "1.0.0"),
    .package(url: "https://github.com/AFNetworking/AFNetworking.git", .exact("4.0.1")),
    .package(name: "FMDB", url: "https://github.com/ccgus/fmdb", .exact("2.7.7")),
    .package(url: "https://github.com/kishikawakatsumi/UICKeyChainStore.git", .exact("2.2.1")),
    .package(name: "MMWormhole", url: "https://github.com/NetmeraSDK/MMWormhole.git", branch: "feature/spm-support")
  ],
  targets: [
    // Targets are the basic building blocks of a package. A target can define a module or a test suite.
    // Targets can depend on other targets in this package, and on products in packages this package depends on.

    .target(
      name: "NetmeraCore",
      dependencies: [
        .target(name: "netmera-core",
                condition: .when(platforms: [.iOS]))
      ]
    ),
    .target(
      name: "Netmera",
      dependencies: [
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "netmera",
                condition: .when(platforms: [.iOS])),
        .target(name: "netmera-adid",
                condition: .when(platforms: [.iOS])),
        .product(name: "AFNetworking", package: "AFNetworking"),
        .product(name: "UICKeyChainStore", package: "UICKeyChainStore"),
        .product(name: "FMDB", package: "FMDB"),
        .product(name: "MMWormhole", package: "MMWormhole"),
      ]
    ),
    .target(
      name: "NetmeraWithoutAdId",
      dependencies: [
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "netmera",
                condition: .when(platforms: [.iOS])),
        .product(name: "AFNetworking", package: "AFNetworking"),
        .product(name: "UICKeyChainStore", package: "UICKeyChainStore"),
        .product(name: "FMDB", package: "FMDB"),
        .product(name: "MMWormhole", package: "MMWormhole"),
      ]
    ),
    .target(
      name: "NetmeraNotificationServiceExtension",
      dependencies: [
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "netmera-notification-service-extension",
                condition: .when(platforms: [.iOS]))
      ]
    ),
    .target(
      name: "NetmeraNotificationContentExtension",
      dependencies: [
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "netmera-notification-content-extension",
                condition: .when(platforms: [.iOS])),
        .product(name: "MMWormhole", package: "MMWormhole")
      ]
    ),

    .binaryTarget(
      name: "netmera",
      path: "xcframework/Netmera.xcframework"),

      .binaryTarget(
        name: "netmera-core",
        path: "xcframework/NetmeraCore.xcframework"),

      .binaryTarget(
        name: "netmera-adid",
        path: "xcframework/NetmeraAdId.xcframework"),

      .binaryTarget(
        name: "netmera-notification-service-extension",
        path: "xcframework/NetmeraNotificationServiceExtension.xcframework"),

      .binaryTarget(
        name: "netmera-notification-content-extension",
        path: "xcframework/NetmeraNotificationContentExtension.xcframework"),
  ]
)
