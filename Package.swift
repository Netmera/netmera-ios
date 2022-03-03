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
      targets: ["NetmeraSDK", "Netmera"]),
    .library(
      name: "NetmeraNotificationServiceExtension",
      targets: ["NetmeraNotificationServiceExtensionSDK"]),
    .library(
      name: "NetmeraNotificationContentExtension",
      targets: ["NetmeraNotificationContentExtensionSDK"]),
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
      name: "NetmeraSDK",
      dependencies: [
//        "AFNetworking", "UICKeyChainStore", "FMDB", "MMWormhole", "NetmeraCore"
        .product(name: "AFNetworking", package: "AFNetworking"),
        .product(name: "UICKeyChainStore", package: "UICKeyChainStore"),
        .product(name: "FMDB", package: "FMDB"),
        .product(name: "MMWormhole", package: "MMWormhole"),
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "NetmeraAdId",
                condition: .when(platforms: [.iOS])),
        .target(name: "Netmera",
                condition: .when(platforms: [.iOS]))
      ]
    ),
    .target(
      name: "NetmeraNotificationServiceExtensionSDK",
      dependencies: [
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "NetmeraNotificationServiceExtension",
                condition: .when(platforms: [.iOS]))
      ]
    ),
    .target(
      name: "NetmeraNotificationContentExtensionSDK",
      dependencies: [
        .target(name: "NetmeraCore",
                condition: .when(platforms: [.iOS])),
        .target(name: "NetmeraNotificationContentExtension",
                condition: .when(platforms: [.iOS])),
        .product(name: "MMWormhole", package: "MMWormhole")
      ]
    ),
    .binaryTarget(
      name: "NetmeraCore",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta5/NetmeraCore.xcframework.zip",
      checksum: "6d6115798fe7d16e095a0ec2092c76372193d4bafeb777fff87c186ba28419dc"
    ),
    .binaryTarget(
      name: "Netmera",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta5/Netmera.xcframework.zip",
      checksum: "80aed8ecc535da98fb5b0e601e8dccc39e8ac632f3467be2337314335fe0a24d"
    ),
    .binaryTarget(
      name: "NetmeraAdId",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta5/NetmeraAdId.xcframework.zip",
      checksum: "3334b12948f80cceb1024434419b1b6eda9eefbfdec66ceab2e9526579648b86"
    ),
    .binaryTarget(
      name: "NetmeraNotificationServiceExtension",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta5/NetmeraNotificationServiceExtension.xcframework.zip",
      checksum: "fa8f4d32a76076bcf31c61a697afcbc94e86fe6d36d9846a98e9933dd7f4cbf3"
    ),
    .binaryTarget(
      name: "NetmeraNotificationContentExtension",
      url: "https://github.com/Netmera/netmera-ios/releases/download/3.14.8-beta5/NetmeraNotificationContentExtension.xcframework.zip",
      checksum: "da7303266924ad7eb1943f2a3ef4e7b1c03e728edb9745c4ebe57a8abae835ed"
    ),
  ]
)
