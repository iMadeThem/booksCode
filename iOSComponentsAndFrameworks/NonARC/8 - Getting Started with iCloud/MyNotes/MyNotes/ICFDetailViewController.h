//
//  ICFDetailViewController.h
//  MyNotes
//
//  Created by Joe Keeley on 10/24/12.
//  Copyright (c) 2012 Joe Keeley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICFMyNoteDocument.h"
#import "ICFConflictResolutionViewController.h"

@interface ICFDetailViewController : UIViewController <ICFMyNoteDocumentDelegate, ICFMyNoteConflictDelegate>

@property (retain, nonatomic) NSURL *myNoteURL;

@property (assign, nonatomic) IBOutlet UITextView *myNoteTextView;
@property (assign, nonatomic) IBOutlet UIButton *conflictButton;

- (IBAction)resolveConflictTapped:(id)sender;

@end

