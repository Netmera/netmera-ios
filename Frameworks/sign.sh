find FMDB.xcframework -type f -name "*.dylib" -o -name "*.framework" | while read -r file; do
    codesign --force --deep --sign "iPhone Developer: SDK Netmera (8R46J9WK92)" "$file"
done