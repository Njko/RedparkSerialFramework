//
//  PWEtactReader.h
//  PulseWave CocoaPod
//
//  Created by Yann Lapeyre on 29/07/2015.
//  Modified by Nicolas Linard on 30/10/2015.
//  Copyright (c) 2015 Medes-IMPS. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum {
    idle_status,
    in_result_status,
    in_response_status,
    in_error_status
    
} ReaderStatus;

@protocol PWEtactReaderDelegate <NSObject>

-(void)readerStatusChanged:(ReaderStatus)status :(NSString *)optionalText;
-(void)responseReceived:(UInt8)cmd :(NSObject *)result;

@end

@interface PWEtactReader : NSObject

@property (nonatomic, weak) id<PWEtactReaderDelegate> delegate;
@property (nonatomic) UInt8 mode;

-(void)newBytesRead:(NSData *)read;

@end


