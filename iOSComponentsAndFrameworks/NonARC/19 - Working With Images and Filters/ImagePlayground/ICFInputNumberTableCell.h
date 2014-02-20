//
//  ICFInputNumberTableCell.h
//  ImagePlayground
//
//  Created by Joe Keeley on 12/27/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFInputInfoCell.h"

@interface ICFInputNumberTableCell : ICFInputInfoCell

@property (nonatomic, retain) IBOutlet UILabel *inputNumberLabel;
@property (nonatomic, retain) IBOutlet UISlider *inputNumberSlider;

@end
