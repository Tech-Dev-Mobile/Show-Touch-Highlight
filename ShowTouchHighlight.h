//
//  ShowTouchHighlight.h
//  ShowTouchHighlight
//
//  Created by Dhaya on 27/01/14.
//  Copyright (c) 2014 Dhaya. All rights reserved.
//

#import <Foundation/Foundation.h>
#import<AudioToolbox/AudioToolbox.h>

@interface ShowTouchHighlight : NSObject
{
    UIImageView *actionImage;
}
- (void)showHightlight:(UIView *)view touches:(NSSet *)touches time:(float)time;
- (void)removeImage;

@end