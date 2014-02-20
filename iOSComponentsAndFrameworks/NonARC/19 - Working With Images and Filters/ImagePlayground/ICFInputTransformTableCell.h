//
//  ICFInputTransformTableCell.h
//  ImagePlayground
//
//  Created by Joe Keeley on 12/27/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFInputInfoCell.h"

@interface ICFInputTransformTableCell : ICFInputInfoCell

@property (nonatomic, retain) IBOutlet UILabel *inputTransformLabel;
@property (nonatomic, retain) IBOutlet UITextField *inputTXTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputTYTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputRotateTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputSXTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputSYTextField;

@end
