//
//  AGIPCAssetsController.h
//  AGImagePickerController
//
//  Created by Artur Grigor on 17.02.2012.
//  Copyright (c) 2012 - 2013 Artur Grigor. All rights reserved.
//  
//  For the full copyright and license information, please view the LICENSE
//  file that was distributed with this source code.
//  

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <CoreLocation/CoreLocation.h>

#import "AGImagePickerController.h"
#import "AGIPCAssetItem.h"

@interface AGIPCAssetsController : UICollectionViewController

@property (nonatomic, strong) ALAssetsGroup *assetsGroup;
@property (nonatomic, weak) AGImagePickerController *imagePickerController;

- (id)initWithImagePickerController:(AGImagePickerController *)imagePickerController andAssetsGroup:(ALAssetsGroup *)assetsGroup;

@end
