//
//  FSPhotoContainerView.h
//  FSPhotoPicker
//
//  Created by 付森 on 2018/9/10.
//  Copyright © 2018年 付森. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSPhotoContainerView : UIScrollView

@property (nonatomic, strong) UIImage *image;

- (void)setupClickImageBlock:(void(^)(void))block;

@end
