//
//  PWEtactCmd.h
//  PulseWave CocoaPod
//
//  Created by Yann Lapeyre on 09/10/2015.
//  Modified by Nicolas Linard on 30/10/2015.
//  Copyright © 2015 Medes-IMPS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PWEtactReader.h"

@interface PWEtactCmd : NSObject

@property (nonatomic, strong) NSData *command;
@property (nonatomic, strong) PWEtactReader *reader;

@end
