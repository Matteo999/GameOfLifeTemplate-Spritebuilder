//
//  Grid.h
//  GameOfLife
//
//  Created by Matteo La Mendola on 19/08/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
