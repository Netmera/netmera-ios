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
      name: "NetmeraNotificationServiceExtensionSDK",
      targets: ["NetmeraNotificationServiceExtensionWrapper"]),
    .library(
      name: "NetmeraNotificationContentExtensionSDK",
      targets: ["NetmeraNotificationContentExtensionWrapper"]),
  ],
  dependencies: [
    // Dependencies declare other packages that this package depends on.
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
    // Third party dependencies
    .binaryTarget(name: "AFNetworking", path: "Frameworks/AFNetworking.xcframework"),
    .binaryTarget(name: "FMDB", path: "Frameworks/FMDB.xcframework"),
    .binaryTarget(name: "MMWormhole", path: "Frameworks/MMWormhole.xcframework"),
    .binaryTarget(name: "UICKeyChainStore", path: "Frameworks/UICKeyChainStore.xcframework"),
    .target(
      name: "NetmeraWrapper",
      dependencies: [
        .target(name: "NetmeraCore", condition: .when(platforms: [.iOS])),
        .target(name: "NetmeraAdId", condition: .when(platforms: [.iOS])),
        .target(name: "Netmera", condition: .when(platforms: [.iOS])),
        .target(name: "AFNetworking", condition: .when(platforms: [.iOS])),
        .target(name: "FMDB", condition: .when(platforms: [.iOS])),
        .target(name: "MMWormhole", condition: .when(platforms: [.iOS])),
        .target(name: "UICKeyChainStore", condition: .when(platforms: [.iOS])),
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
              .target(name: "MMWormhole", condition: .when(platforms: [.iOS])),
            ]),
    .target(name: "NetmeraNotificationServiceExtensionWrapper",
            dependencies: [
              .target(name: "NetmeraCore", condition: .when(platforms: [.iOS])),
              .target(name: "NetmeraNotificationServiceExtension", condition: .when(platforms: [.iOS])),
            ])
  ]
)
