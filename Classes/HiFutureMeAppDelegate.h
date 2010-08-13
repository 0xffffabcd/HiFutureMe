//
//  HiFutureMeAppDelegate.h
//  HiFutureMe
//
//  Created by nacereddine on 8/10/10.
//  Copyright nacereddine 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HiFutureMeAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	
	IBOutlet UITextView* messageContent;
	IBOutlet UIDatePicker* receiveTime;
	IBOutlet UIButton* hideKbrdButton;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITextView* messageContent;
@property (nonatomic, retain) IBOutlet UIDatePicker* receiveTime;
@property (nonatomic, assign) IBOutlet UIButton* hideKbrdButton;

- (IBAction) sendMessage;
- (IBAction) clear;
- (IBAction) hideTheKeyboard;
- (IBAction) showHiddenButton;


@end

