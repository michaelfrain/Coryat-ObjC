//
//  GameSelectionCell.h
//  Coryat-ObjC
//
//  Created by Michael Frain on 2/8/15.
//  Copyright (c) 2015 Michael Frain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GameSelectionCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *lblGameDateType;
@property (nonatomic, weak) IBOutlet UILabel *lblGameStatus;

@property (nonatomic, strong) NSString *gameDateType;
@property (nonatomic, strong) NSString *gameStatus;

+ (GameSelectionCell *)cellForTableView:(UITableView *)tableView withGameDateType:(NSString *)gameDateType withGameStatus:(NSString *)gameStatus;

@end
