//
//  OLPhotobookPageViewController.h
//  KitePrintSDK
//
//  Created by Konstadinos Karayannis on 4/17/15.
//  Copyright (c) 2015 Deon Botha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OLPhotobookPageContentViewController : UIViewController

@property (strong, nonatomic) NSMutableArray *assets;
@property (strong, nonatomic) NSMutableArray *userSelectedPhotos;
@property (assign, nonatomic) NSInteger pageIndex;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (void)loadImageWithCompletionHandler:(void(^)(void))handler;
- (NSInteger)imageIndexForPoint:(CGPoint)p;
- (void)highlightImageAtIndex:(NSInteger)index;
- (void)unhighlightImageAtIndex:(NSInteger)index;
- (void)clearImage;

@end
