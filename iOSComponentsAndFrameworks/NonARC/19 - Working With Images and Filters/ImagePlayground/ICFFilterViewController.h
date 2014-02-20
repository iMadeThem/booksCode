//
//  ICFFilterViewController.h
//  ImagePlayground
//
//  Created by Joe Keeley on 12/21/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFViewController.h"
#import <GLKit/GLKit.h>

@protocol ICFFilterEditingDelegate <NSObject>

- (void)updateFilterAttribute:(NSString *)attributeKey withValue:(id)value;

@end

@interface ICFFilterViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ICFFilterEditingDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (nonatomic, retain) CIFilter *selectedFilter;
@property (nonatomic, retain) IBOutlet UITableView *filterTableView;
@property (nonatomic, retain) IBOutlet UILabel *filterNameLabel;
@property (nonatomic, retain) IBOutlet UIView *previewImageContainer;
@property (nonatomic, retain) IBOutlet UIImageView *previewImageView;
@property (nonatomic, retain) IBOutlet GLKView *livePreview;
@property (nonatomic, assign) id<ICFFilterProcessingDelegate> filterDelegate;

@end

