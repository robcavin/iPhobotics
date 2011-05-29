//
//  _DeepAppDelegate.h
//  3Deep
//
//  Created by Rob Cavin on 5/26/11.
//  Copyright 2011 BumblebeeJuice. All rights reserved.
//

#import <UIKit/UIKit.h>

@class _DeepViewController;

@interface _DeepAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet _DeepViewController *viewController;

@end
