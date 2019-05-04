import Vue from 'vue';
import Router from 'vue-router';
import Store from 'vuex'

Vue.use(Router);

export default new Router({
  routes: [
    { path: '/', name: 'home', component: () => import(/* webpackChunkName: "home" */ './views/Home.vue') },
    { path: '/about', name: 'about', component: () => import(/* webpackChunkName: "about" */ './views/About.vue') },
    { path: '/ios/:version', name: 'versions', component: () => import('./views/Versions.vue') }
  ],
});
