//
//  DKSerialPort.h
//  Dioder Screen Colours
//
//  Created by Daniel Kennett on 15/09/2011.
//  Copyright (c) 2011 Daniel Kennett. All rights reserved.
//

// The change notifications part of this class is based heavily (in that it's practically a
// copy & paste of AMSerialPortList, available at: http://www.harmless.de/cocoa-code.php

#import <Foundation/Foundation.h>

static NSString * const DKSerialPortsDidChangeNotification = @"DKSerialPortsDidChangeNotification";
static NSString * const DKSerialPortsKey = @"DKSerialPorts";

@interface DKSerialPort : NSObject

// Serial port listing
+(NSArray *)availableSerialPorts;

// Ports
-(id)initWithSerialPortAtPath:(NSString *)path name:(NSString *)name;
-(void)openWithBaudRate:(NSUInteger)baud error:(NSError **)error;
-(void)writeData:(NSData *)data;
-(void)close;

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *serialPortPath;
@property (nonatomic, readonly) BOOL isOpen;

@end
