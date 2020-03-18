//
//  LSIFirstResponder.h
//  Quakes-Objc
//
//  Created by Thomas Sabino-Benowitz on 3/18/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIFirstResponder : NSObject

// Property Attribute Rule: Use copy for NSString, NSArray, NSDictionary, NSSet
//protect our data uing encapsulation, and we should always copy these
//types of objects that mutable counterparts (NSMutableString)

@property (nonatomic, readwrite, copy) NSString *name;

- (instancetype)initWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
