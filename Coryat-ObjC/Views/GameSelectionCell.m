//
//  GameSelectionCell.m
//  Coryat-ObjC
//
//  Created by Michael Frain on 2/8/15.
//  Copyright (c) 2015 Michael Frain. All rights reserved.
//

#import "GameSelectionCell.h"

@implementation GameSelectionCell

+ (GameSelectionCell *)cellForTableView:(UITableView *)tableView withGameDateType:(NSString *)gameDateType withGameStatus:(NSString *)gameStatus {
    GameSelectionCell *cell = [tableView dequeueReusableCellWithIdentifier:NSStringFromClass([GameSelectionCell class])];
    
    cell.gameDateType = gameDateType;
    cell.gameStatus = gameStatus;
    
    return cell;
}

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if (self != nil) {
        [self addObserver:self forKeyPath:@"gameDateType" options:NSKeyValueObservingOptionInitial context:NULL];
        [self addObserver:self forKeyPath:@"gameStatus" options:NSKeyValueObservingOptionInitial context:NULL];
    }
    return self;
}

- (void)dealloc {
    [self removeObserver:self forKeyPath:@"gameDateType"];
    [self removeObserver:self forKeyPath:@"gameStatus"];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context {
    if ([keyPath isEqualToString:@"gameDateType"]) {
        self.lblGameDateType.text = self.gameDateType;
    }
    
    if ([keyPath isEqualToString:@"gameStatus"]) {
        self.lblGameStatus.text = self.gameStatus;
    }
}

@end
