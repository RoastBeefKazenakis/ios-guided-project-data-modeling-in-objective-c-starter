//
//  LSIFirstResponder.m
//  Quakes-Objc
//
//  Created by Thomas Sabino-Benowitz on 3/18/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "LSIFirstResponder.h"

@implementation LSIFirstResponder
-(instancetype)initWithName:(NSString *)name {
    if (self = [super init]) {
        
//        upholds the propertie contract for copy
        _name = [name copy];
        
    }
    return self;
}

-(void)setName:(NSString *)name {
    
//    you must set the value to your instance variable
    _name = name;
    
    self.name = [name copy];

    // self.name = name; BUG: recursively calls our setName function
    //    we have to call our copy
}


@end
