//
//  DMBAmbientLightSensor.h
//  DarkModeBuddyCore
//
//  Created by Guilherme Rambo on 23/02/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DMBAmbientLightSensor : NSObject

@property (nonatomic, readonly) double value;
@property (nonatomic, assign) NSTimeInterval updateInterval;

- (void)activate;
- (void)invalidate;

@property (nonatomic, readonly) BOOL isPresent;

@end

NS_ASSUME_NONNULL_END