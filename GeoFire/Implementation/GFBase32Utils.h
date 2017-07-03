//
//  GFBase32Utils.h
//  GeoFire
//
//  Created by Jonny Dimond on 7/7/14.
//  Copyright (c) 2014 Firebase. All rights reserved.
//

#import <Foundation/Foundation.h>

#define BITS_PER_BASE32_CHAR 5

@interface GFBase32Utils : NSObject


/**
 将一个整型数值转换为Base32编码。
 
 @param value 需要转换的整型数值。
 @return Base32编码后的值。
 */
+ (char)valueToBase32Character:(NSUInteger)value;

/**
 将一个Base32编码转换为整型数值。
 
 @param character 需要转换的Base32编码。
 @return 转换后的整型值。
 */
+ (NSUInteger)base32CharacterToValue:(char)character;

/**
 获得一个Base32编码字符串。

 @return Base32编码字符串。
 */
+ (NSString *)base32Characters;

@end
