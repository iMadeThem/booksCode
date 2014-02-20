//
//  AddressBookAppDelegate.h
//  AddressBook
//
//  Created by Kyle Richter on 2/27/12.
//  Copyright 2012 Dragon Forged Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddressBookAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;

@end

