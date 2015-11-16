//
//  PWByteUtils.h
//  PulseWave CocoaPod
//
//  Created by Yann Lapeyre on 20/07/2015.
//  Modified by Nicolas Linard on 30/10/2015.
//  Copyright (c) 2015 Medes-IMPS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PWByteUtils : NSObject

+(NSData *)reverseUInt32:(UInt32)source;
+(NSData *)reverseData:(NSData *)source;
+(NSString *)dataToString:(NSData *)data;
+(UInt32)dataToUInt32:(NSData *)data;
+(UInt8)readOneByteFrom:(NSData *)source atIndex:(int)index;

@end
