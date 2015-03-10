//
//  AJCrystallBall.m
//  CrystalBall
//
//  Created by Alberto Jauregui on 1/31/14.
//  Copyright (c) 2014 Alberto Jauregui. All rights reserved.
//

#import "AJCrystallBall.h"

@implementation AJCrystallBall

- (NSArray *) predictions {
    if(_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"Es cierto", @"Mi respuesta es no", @"Es dudoso", @"Mejor no te lo digo", @"Concentrate por favor", @"Prefiero no decir nada", @"Quizás, sí", @"Claro que sí", @"No contestaré eso", @"SÍ", @"NO", nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
