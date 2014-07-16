//
//  BoniBeaconLogger.h
//  BoniBeaconLogger
//
//  Created by Boni on 26.05.2014.
//  Copyright (c) 2014 Boni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BoniBeaconLogger : NSObject

- (id)init;

/**
 * Starts the ranging and logging boni beacons in the specified region.
 *
 * @return void
 */
- (void)startRangingAndLogBeacon;

/**
 * Stops the ranging and logging boni beacons in the specified region.
 *
 * @return void
 */
- (void)stopRangingAndLogBeacon;

@end
