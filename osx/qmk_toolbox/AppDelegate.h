//
//  AppDelegate.h
//  qmk_toolbox
//
//  Created by Jack Humbert on 9/3/17.
//  Copyright © 2017 QMK. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Printing.h"
#import "Flashing.h"
#import "HID.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property Printing * printer;

@end
