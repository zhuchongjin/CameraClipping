//
//  CameraView.h
//  Camera
//
//  Created by zcj on 2017/6/2.
//  Copyright © 2017年 zcj. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CameraDelegate <NSObject>

- (void)CameraTakePhoto:(UIImage *)image;

@end

@interface CameraViewController : UIViewController

@property (nonatomic, weak)id<CameraDelegate> delegate;



@end
