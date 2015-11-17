//
//  UselessClass.m
//  RedparkSerialFramework
//
//  Created by Nicolas Linard on 17/11/2015.
//  Copyright © 2015 MEDES. All rights reserved.
//

#import "UselessClass.h"

@implementation UselessClass

- (void) uselessMethod {
    RscMgr *useless = [[RscMgr alloc]init];
#pragma unused(useless)
}

@end
