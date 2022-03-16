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
      targets: ["Netmera", "NetmeraCore", "NetmeraAdId", "AFNetworking", "FMDB", "MMWormhole", "UICKeyChainStore"]),
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
  ],
  targets: [
    // Targets are the basic building blocks of a package. A target can define a module or a test suite.
    // Targets can depend on other targets in this package, and on products in packages this package depends on.
    .binaryTarget(
      name: "NetmeraCore",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta3/NetmeraCore.xcframework.zip",
      checksum: "a5525675fa7990b66c3a2ac314f85ae4d5c19ae9d6cb219c1d3a522b79a9c37a"
    ),
    .binaryTarget(
      name: "Netmera",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta3/Netmera.xcframework.zip",
      checksum: "75e73a93316fab8a0d76ce842b56b8fdaf6bf32a40db2681d167fd03900ec325"
    ),
    .binaryTarget(
      name: "NetmeraAdId",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta3/NetmeraAdId.xcframework.zip",
      checksum: "72ab7f347a2e8b8383aff75ed33761748a3ea07b4e9c29f2436cd7234ffd39d4"
    ),
    .binaryTarget(
      name: "NetmeraNotificationServiceExtension",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta3/NetmeraNotificationServiceExtension.xcframework.zip",
      checksum: "2c658093c4030d798008cfb7a54d6f2e661c0f148d94d2f3c17194431ae4eba0"
    ),
    .binaryTarget(
      name: "NetmeraNotificationContentExtension",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta3/NetmeraNotificationContentExtensionEmbedded.xcframework.zip",
      checksum: "71a4cb33a25bb9576f692885e1457c19ccbb193349ce919a9fd6286321afd1ad"
    ),
    .binaryTarget(name: "AFNetworking", path: "Frameworks/AFNetworking.xcframework"),
    .binaryTarget(name: "FMDB", path: "Frameworks/FMDB.xcframework"),
    .binaryTarget(name: "MMWormhole", path: "Frameworks/MMWormhole.xcframework"),
    .binaryTarget(name: "UICKeyChainStore", path: "Frameworks/UICKeyChainStore.xcframework")
  ]
)
