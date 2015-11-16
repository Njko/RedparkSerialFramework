//
//  PWDataReaderDelegate.h
//  PulwaveAnalyser
//
//  Created by Nicolas Linard on 03/11/2015.
//  Copyright © 2015 MEDES. All rights reserved.
//

#ifndef PWDataReaderDelegate_h
#define PWDataReaderDelegate_h

typedef NS_ENUM(NSUInteger, PWReaderStatus) {
    Idle,
    Check,
    Ok,
    Error
};

@protocol PWDataReaderDelegate <NSObject>

- (void) isDeviceConnected:(BOOL)isConnected;
- (void) deviceStatusChanged:(PWReaderStatus)status;
- (void) updateHardwareVersion:(NSNumber *)versionNumber;
- (void) updateSoftwareVersion: (NSNumber *)versionNumber;
- (void) updateBartVersion:(NSNumber *)versionNumber;

@end

#endif /* PWDataReaderDelegate_h */
