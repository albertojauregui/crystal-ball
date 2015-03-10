//
//  AJCrystallBall.h
//  CrystalBall
//
//  Created by Alberto Jauregui on 1/31/14.
//  Copyright (c) 2014 Alberto Jauregui. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AJCrystallBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end
