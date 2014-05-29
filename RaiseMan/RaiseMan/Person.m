//
//  Person.m
//  RaiseMan
//
//  Created by thiago on 5/29/14.
//  Copyright (c) 2014 bignerdranch. All rights reserved.
//

#import "Person.h"

@implementation Person

- (instancetype)init
{
    self = [super init];
    
    if (self) {
        [self setExpectedRaise:0.05];
        [self setPersonName:@"New Person"];
    }
    
    return self;
}

@end