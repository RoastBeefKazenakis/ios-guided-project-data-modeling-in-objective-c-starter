//
//  LSIQuake.h
//  Quakes-Objc
//
//  Created by Thomas Sabino-Benowitz on 3/18/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIQuake : NSObject

// Properties
//magnitude, place, time, longitude, latitude

@property (nonatomic, readonly) double magnitude;
@property (nonatomic, readonly, copy) NSString *place;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

// init
- (instancetype) initWithMagnitude:(double)magnitude
                            placce:(NSString *)place
                              time:(NSDate *)time
                          latitude:(double)latitude
                         longitude:(double)longitude;


// init with Dictionary (NSJSonSerialization)

@end

NS_ASSUME_NONNULL_END
