//
//  ICFInputVectorTableCell.h
//  ImagePlayground
//
//  Created by Joe Keeley on 12/27/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFInputInfoCell.h"

@interface ICFInputVectorTableCell : ICFInputInfoCell <UITextFieldDelegate>

@property (nonatomic, retain) IBOutlet UILabel *inputVectorLabel;
@property (nonatomic, retain) IBOutlet UITextField *inputOneTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputTwoTextField;

@property (nonatomic, retain) IBOutlet UITextField *inputXTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputYTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputZTextField;
@property (nonatomic, retain) IBOutlet UITextField *inputWTextField;

@end
