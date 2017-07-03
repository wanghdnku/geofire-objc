//
//  GFGeoHash.h
//  GeoFire
//
//  Created by Jonny Dimond on 7/3/14.
//  Copyright (c) 2014 Firebase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#define GF_DEFAULT_PRECISION 10
#define GF_MAX_PRECISION 22

@interface GFGeoHash : NSObject

@property (nonatomic, strong, readonly) NSString *geoHashValue;

/**
 使用默认精确度，将location转为geoHash。
 
 @param location 经纬度数据，double类型。
 @return geoHash对象。
 */
- (id)initWithLocation:(CLLocationCoordinate2D)location;
+ (GFGeoHash *)newWithLocation:(CLLocationCoordinate2D)location;

/**
 设定精确度，将location转为geoHash。
 
 @param location 经纬度数据，double类型。
 @param precision 精确度，最大为22。
 @return geoHash对象。
 */
- (id)initWithLocation:(CLLocationCoordinate2D)location precision:(NSUInteger)precision;
+ (GFGeoHash *)newWithLocation:(CLLocationCoordinate2D)location precision:(NSUInteger)precision;

/**
 将一个合法的geoHash字符串转换为geoHash对象。
 
 @param string geoHash字符串，
 @return geoHash对象。
 */
- (id)initWithString:(NSString *)string;
+ (GFGeoHash *)newWithString:(NSString *)string;


/**
 判断一个GeoHash值是否合法。

 @param hash GeoHash值。
 @return 合法返回YES，反之为NO。
 */
+ (BOOL)isValidGeoHash:(NSString *)hash;

@end
