//
//  ICFInputColorTableCell.h
//  ImagePlayground
//
//  Created by Joe Keeley on 12/27/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFInputInfoCell.h"

@interface ICFInputColorTableCell : ICFInputInfoCell

@property (nonatomic, retain) IBOutlet UILabel *inputColorLabel;
@property (nonatomic, retain) IBOutlet UISlider *inputRedSlider;
@property (nonatomic, retain) IBOutlet UISlider *inputGreenSlider;
@property (nonatomic, retain) IBOutlet UISlider *inputBlueSlider;
@property (nonatomic, retain) IBOutlet UISlider *inputAlphaSlider;
@property (nonatomic, retain) IBOutlet UIView *displayColorView;

- (IBAction)colorSliderChanged:(id)sender;

@end
