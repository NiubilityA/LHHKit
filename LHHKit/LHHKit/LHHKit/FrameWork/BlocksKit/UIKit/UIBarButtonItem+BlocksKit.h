//
//   ___           ___        ___      ___        ___
//  /\  \         /\  \      /\  \    /\  \      /\  \
//  \ \  \        \ \  \_____\ \  \   \ \  \_____\ \  \
//   \ \  \        \ \  \_____\ \  \   \ \  \_____\ \  \
//    \ \  \______  \ \  \     \ \  \   \ \  \     \ \  \
//     \ \________\  \ \__\     \ \__\   \ \__\     \ \__\
//      \/________/   \/__/      \/__/    \/__/      \/__/
//
//  欢欢为人民服务
//  有问题请联系我，http://www.jianshu.com/u/3c6ff28fdc63
//
// -----------------------------------------------------------------------------


#import <UIKit/UIKit.h>

/** Block event initialization for UIBarButtonItem.

 This set of extensions has near-drop-in replacements
 for the standard set of UIBarButton item initializations,
 using a block handler instead of a target/selector.

 Includes code by the following:

 - [Kevin O'Neill](https://github.com/kevinoneill)
 - [Zach Waldowski](https://github.com/zwaldowski)

 @warning UIBarButtonItem is only available on a platform with UIKit.
 */
@interface UIBarButtonItem (BlocksKit)

/** Creates and returns a configured item containing the specified system item.

 @return Newly initialized item with the specified properties.
  systemItem The system item to use as the item representation. One of the constants defined in UIBarButtonSystemItem.
  action The block that gets fired on the button press.
 */
- (id)bk_initWithBarButtonSystemItem:(UIBarButtonSystemItem)systemItem handler:(void (^)(id sender))action NS_REPLACES_RECEIVER;

/** Creates and returns a configured item using the specified image and style.
 
 @return Newly initialized item with the specified properties.
  image The item’s image. If nil an image is not displayed.
 If this image is too large to fit on the bar, it is scaled to fit
 The size of a toolbar and navigation bar image is 20 x 20 points.
  style The style of the item. One of the constants defined in UIBarButtonItemStyle.
  action The block that gets fired on the button press.
 */
- (id)bk_initWithImage:(UIImage *)image style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action NS_REPLACES_RECEIVER;

/** Creates and returns a configured item using the specified image and style.

 @return Newly initialized item with the specified properties.
  image The item’s image. If nil an image is not displayed.
  landscapeImagePhone The image to be used for the item in landscape bars in the UIUserInterfaceIdiomPhone idiom.
  style The style of the item. One of the constants defined in UIBarButtonItemStyle.
  action The block that gets fired on the button press.
 */
- (id)bk_initWithImage:(UIImage *)image landscapeImagePhone:(UIImage *)landscapeImagePhone style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action NS_REPLACES_RECEIVER NS_AVAILABLE_IOS(5_0);

/** Creates and returns a configured item using the specified text and style.
 
 @return Newly initialized item with the specified properties.
  title The text displayed on the button item.
  style The style of the item. One of the constants defined in UIBarButtonItemStyle.
  action The block that gets fired on the button press.
 */
- (id)bk_initWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style handler:(void (^)(id sender))action NS_REPLACES_RECEIVER;

@end