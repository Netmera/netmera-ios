//
//  NetmeraSwizzle.h
//
//
//  Created by inomera on 10.02.2020.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetmeraSwizzle : NSObject

+ (BOOL)swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ error:(NSError**)error_ class:(Class) clazz;

@end

// Methods by Netmera.
@interface NetmeraSwizzle (NetmeraExtension)

+ (BOOL)hook_methodWithOriginalClass:(Class)originalClass
                         originalSel:(SEL)originalSel
                       replacedClass:(Class)replacedClass
                         replacedSel:(SEL)replacedSel;

@end


NS_ASSUME_NONNULL_END
