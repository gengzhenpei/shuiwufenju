<dl class="tbox">
						<dt>
							<strong>
								<a href="javascript:void(0)">{dede:field name='typename'/}</a>
							</strong>
							<span class="more">
								<a href="[field:typelink /]">更多...</a>
							</span>
						</dt>
						<dd>
							<ul class="d1 ico3">
								{dede:arclist titlelen='60' row='6'}
								<li><span>[field:pubdate function="MyDate('m-d',@me)"/]</span>
									<a href="[field:arcurl /]">[field:title /]</a>
								</li>
								{/dede:arclist}
							</ul>
						</dd>
					</dl>