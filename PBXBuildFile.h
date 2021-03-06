//
//  SYPBXBuildFile.h
//  XcodeProjectEditor
//
//  Created by Daniel DeCovnick on 4/6/10.
//  Copyright 2010 Softyards Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "XcodeObject.h"

@class PBXFileReference;

@interface PBXBuildFile : XcodeObject {
	NSString *fileRef;
	NSMutableDictionary *settings;
}
-(PBXFileReference *)fileRef;
-(void)setFileRef:(NSString *)newRef;
@property(retain) NSMutableDictionary *settings;
@end
