//
//  ICFInputImageTableCell.h
//  ImagePlayground
//
//  Created by Joe Keeley on 12/27/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFInputInfoCell.h"

@interface ICFInputImageTableCell : ICFInputInfoCell

@property (nonatomic, retain) IBOutlet UIImageView *inputImageView;
@property (nonatomic, retain) IBOutlet UILabel *inputLabel;

@end
