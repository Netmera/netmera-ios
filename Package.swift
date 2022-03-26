// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "netmera-ios",
  platforms: [.iOS(.v10)],
  products: [
    // Products define the executables and libraries a package produces, and make them visible to other packages.
    .library(
      name: "NetmeraSDK",
      targets: ["Netmera",
                "NetmeraCore",
                "NetmeraAdId",
                "AFNetworking",
                "FMDB",
                "MMWormhole",
                "UICKeyChainStore"]),
    .library(
      name: "NetmeraNotificationServiceExtensionSDK",
      targets: ["NetmeraNotificationServiceExtension",
                "NetmeraCore"]),
    .library(
      name: "NetmeraNotificationContentExtensionSDK",
      targets: ["NetmeraNotificationContentExtension",
                "NetmeraCore",
                "MMWormhole"
               ]),
  ],
  dependencies: [
    // Dependencies declare other packages that this package depends on.
    // .package(url: /* package url */, from: "1.0.0"),
  ],
  targets: [
    // Targets are the basic building blocks of a package. A target can define a module or a test suite.
    // Targets can depend on other targets in this package, and on products in packages this package depends on.
//    .binaryTarget(
//      name: "NetmeraCore",
//      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.9/NetmeraCore.xcframework.zip",
//      checksum: "f003fc425896ef6af863b06c9728248b6f7b538a5bc477fd71a34f1916516be2"
//    ),
//    .binaryTarget(
//      name: "Netmera",
//      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.9/Netmera.xcframework.zip",
//      checksum: "9e4c4bd1a07312f8e5890789541208abc21a1bf64dcffb174b9110ab55bdf945"
//    ),
//    .binaryTarget(
//      name: "NetmeraAdId",
//      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.9/NetmeraAdId.xcframework.zip",
//      checksum: "47bca178a322bf2554ffb828cdc025534c42429c007a77d973907a3a5378d951"
//    ),
//    .binaryTarget(
//      name: "NetmeraNotificationServiceExtension",
//      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.9/NetmeraNotificationServiceExtension.xcframework.zip",
//      checksum: "8033701202bf2e1301b9cf211e3897b879e63b1cb06510d6b7eef25d725e8e30"
//    ),
//    .binaryTarget(
//      name: "NetmeraNotificationContentExtension",
//      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.9/NetmeraNotificationContentExtension.xcframework.zip",
//      checksum: "b708f4f362bcf0b2c1f5abe4776d5fc0997da90f933af03071539292d2c587c9"
//    ),

    .binaryTarget(name: "NetmeraCore", path: "NetmeraFrameworks/NetmeraCore.xcframework"),
    .binaryTarget(name: "Netmera", path: "NetmeraFrameworks/Netmera.xcframework"),
    .binaryTarget(name: "NetmeraAdId", path: "NetmeraFrameworks/NetmeraAdId.xcframework"),
    .binaryTarget(name: "NetmeraNotificationServiceExtension", path: "NetmeraFrameworks/NetmeraNotificationServiceExtension.xcframework"),
    .binaryTarget(name: "NetmeraNotificationContentExtension", path: "NetmeraFrameworks/NetmeraNotificationContentExtension.xcframework"),
    .binaryTarget(name: "AFNetworking", path: "Frameworks/AFNetworking.xcframework"),
    .binaryTarget(name: "FMDB", path: "Frameworks/FMDB.xcframework"),
    .binaryTarget(name: "MMWormhole", path: "Frameworks/MMWormhole.xcframework"),
    .binaryTarget(name: "UICKeyChainStore", path: "Frameworks/UICKeyChainStore.xcframework")
  ]
)
