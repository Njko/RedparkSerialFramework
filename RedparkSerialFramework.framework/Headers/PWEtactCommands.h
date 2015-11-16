//
//  PWEtactCommands.h
//  PulseWave CocoaPod
//
//  Created by Yann Lapeyre on 19/07/2015.
//  Modified by Nicolas Linard on 30/10/2015.
//  Copyright (c) 2015 Medes-IMPS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PWEtactCommands : NSObject

+(NSData *) hardwareVersion;
+(NSData *) softwareVersion;
+(NSData *) bartVersion;
+(NSData *) hardwareDescription;
+(NSData *) softwareDescription;
+(NSData *) dataCount;
+(NSData *) unloadData:(UInt8)type fromIndex:(UInt32)minIndex toIndex:(UInt32)maxIndex;
+(UInt8)computeCrc:(NSData *)data;
+(NSData *)buildAck:(UInt8)cmd;

@end
