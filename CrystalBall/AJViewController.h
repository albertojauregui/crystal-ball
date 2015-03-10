//
//  AJViewController.h
//  CrystalBall
//
//  Created by Alberto Jauregui on 1/31/14.
//  Copyright (c) 2014 Alberto Jauregui. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AJCrystallBall;

@interface AJViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) AJCrystallBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;
- (void) makePrediction;

@end
